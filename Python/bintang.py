# print('##  Program Python Segitiga Bintang  ##')
# print('=======================================')
# print()
 
# tinggi_segitiga = int(input('Input tinggi segitiga: '))
# print()
 
# for i in range(tinggi_segitiga):
#   for j in range(i+1):
#     print(' *',end='')
#   print()


# for i in range(10):
#   for j in range(i):
#     print("*",end=" ")
#   print()

# def pola_bintang_14_baris():
#     n = 7  

#     for i in range(1, n + 1):
#         for j in range(i):
#             print("*", end="")
#         print()

#     for i in range(n - 1, 0, -1):
#         for j in range(i):
#             print("*", end="")
#         print()

# pola_bintang_14_baris()

# for i in range (1,8):
# 	print ("*" * i)
	

# for i in range (7,0, -1):
# 	print ("*" * i)

n = 6
for i in range(1, n+1):
    print(" "*(n-i) + " *"*(1*i-1))
