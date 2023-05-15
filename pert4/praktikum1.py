print("PRAKTIKUM 1 \n")

# operasi sequence 

myList = [1,2,3,4]
a = [myList] * 3
print(a)

myList[2] = 45
print(a)
print('\n')

# metode list dalam python

myList1 = [1024,3,True,6.5]
print(myList1)
myList1.append(False)
print(myList1)
print(myList1.pop()) # output = index paling terakhir --> yang dihapus
print(myList1)
print(myList1.pop(1)) # output = 3 --> yang dihapus
print(myList1)
print(myList1.sort())
print(myList1)