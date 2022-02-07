print('Hello World!')
print('AMT')
print('Hello')
num1 = 'hello world'
num2 = 12.3
print(type(num1))
print(type(num2))

greeting = 'Hello Bootcamper!'

print(greeting[0:5])
print(greeting[6:-2])

mylist = ['banana', 'orange', 'mango', 'apple']
print(mylist[-1])
print(mylist[1:3])
mylist[0] = 'papaya'

for fruit in mylist:
    print(fruit)
    
mytuple = ('a', 'b', 'c', 'd')
print(mytuple[1])
print(mytuple[1:3])
for tuple in mytuple:
    print(tuple)
    
mydictionary = {
    'name' : 'Mg Mg',
    'age' : 37,
    'city' : 'YGN'
}
print(mydictionary)
print(mydictionary['name'])

for key in mydictionary:
    # print(mydictionary[key])
    print(key, mydictionary[key])

