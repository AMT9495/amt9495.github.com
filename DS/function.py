def sayHi(message):
    print('Hi',message)
    
sayHi('amt')
sayHi('Boom')

def tax(amount,rate):
    return amount * rate
text1 = tax(12000,0.05)
text2 = tax(150000,0.025)
print(text1,text2)