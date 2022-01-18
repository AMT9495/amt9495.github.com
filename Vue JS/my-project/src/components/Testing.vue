<template>
    <div id = 'testing'>
        <h2>Testing Component by {{name}} - <span class="text-danger">{{age}}</span></h2>
        <p>
            "{{quotes[0].text}}"
            <strong>By {{quotes[0].authour}}</strong>
        </p>
    </div>
</template>
<script>
const axios = require('axios').default;
export default{
    data(){
    return{
    quotes : null,
        age : 26
        }
        },
    props : {
        name : String
    },
    mounted(){
    axios.get('https://type.fit/api/quotes')
        .then(response => {
            this.quotes = response.data;
                });
    }
    
}
</script>