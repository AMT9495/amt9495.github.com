
        $(function(){
            $('.content').first().slideDown();
            $('ul.linkWapper li a').on('click',function(event){
                let currentTag = $(this);
                $('ul.linkWapper li a').removeClass('active');
                currentTag.addClass('active');

                $('.content').slideUp();
                currentTagHref = currentTag.attr('href');
                $(currentTagHref).slideDown();
                event.preventDefault();
            })
            

            //LS
            $('.atc').on('click',function(){
                let id = $(this).data('id');
                let name = $(this).data('name');
                let price = $(this).data('price');

                let item = {
                    id : id,
                    name: name,
                    price : price,
                    qty: 1
                }

                //  console.log(item)

                let cart = localStorage.getItem('cart');
                let myArr = '';
                

                if(cart != null){
                    myArr = JSON.parse(cart);
                    // console.log(myArr)
                    // for(i=0;i<myArr.length;i++){
                    //     if(myArr[i].id == item.id){
                    //         myArr[i].qty += 1;
                    //         item.qty = myArr[i].qty;
                    //         myArr.splice(i,1)
                    //     }
                    // };
                    
                }else{
                     myArr = []
                     
                }
                

                //homework
                let status = 0;
                for(row of myArr){
                    if(row.id == id){
                        row.qty++;
                        status = 1;
                    }
                }

                if(status == 0){
                    myArr.push(item);
                }
                

                //JS Object => JSon String
                let myArrString = JSON.stringify(myArr);
                // console.log(myArrString)

                localStorage.setItem('cart',myArrString);
                getdata();
                $('.cartAmount').css('display','inline-block');
                $('.cartAmount').html(myArr.length);

                swal({
                    title: 'Nice choice!',
                    text: 'This item add to cart success',
                    timer: 700,
                    onOpen: function () {
                      swal.showLoading()
                    }
                  }).then(
                    function () {},
                    // handling the promise rejection
                    function (dismiss) {
                      if (dismiss === 'timer') {
                        console.log('I was closed by the timer')
                      }
                    }
                  )
            })

            //Get Data From LS
            function getdata() { 
                let cart = localStorage.getItem('cart');
                if(cart != null){
                    let myArr = JSON.parse(cart);
                    let row = '';
                    let total = 0;
                    let i = 0;
                    for([index,item] of myArr.entries()){
                        total += Math.ceil(item.qty*item.price);
                        row += `
                                <tr>
                                    <td>
                                        <button class = "remove" data-id = "${index}"><i class="far fa-trash-alt fa-2x"></i></button>${++i} 
                                    </td>
                                    <td>${item.name}</td>
                                    <td>${item.price} $</td>
                                    <td>
                                        <input type="number" min='1' value='${item.qty}' data-id='${index}' class='updateqty'>    
                                    </td>
                                    <td>${item.qty * item.price} $</td>
                                </tr>
                                `
                    }

                    row += `
                            <tr>
                                <td colspan='4'>Total Amount</td>
                                <td>${total} $</td>
                            </tr>
                            `
                    $('tbody').html(row);
                }else{
                    $('tbody').html(`<tr><td colspan='5'>Your Cart is empty</td></tr>`);
                }
            }
            getdata();

            //Remove
            $('tbody').on('click','.remove',function(){
                let index = $(this).data('id');
                // console.log(index);
                let cart = localStorage.getItem('cart');
                let myArr = JSON.parse(cart);
                //Delete one row
                myArr.splice(index,1)
                // JS obj => json string
                let myArrString = JSON.stringify(myArr);
                //console.log(myArrString)
                localStorage.setItem('cart',myArrString);
                getdata();
                $('.cartAmount').html(myArr.length);
                if(myArr.length == 0){
                    $('.cartAmount').css('display','none');
                }
            });

            // increase - decrease Qty
            $('tbody').on('change','.updateqty',function(){
                let index = $(this).data('id');
                //console.log(index)
                let qty = $(this).val();
                let cart = localStorage.getItem('cart');
                let myArr = JSON.parse(cart);
                myArr[index].qty = qty;
                //JS Obj => json string
                let myArrString = JSON.stringify(myArr);
                //consol.log(myArrString)
                localStorage.setItem('cart',myArrString);
                getdata();
            })

            //checkout
            $('.checkOut').on('click',function(){
                localStorage.removeItem('cart');
                getdata();
                
                $('.cartAmount').css('display','none');
                swal(
                    'Thank for choosing Us!',
                    'Now Your Order is success!',
                    'success',
                );
            })
        });