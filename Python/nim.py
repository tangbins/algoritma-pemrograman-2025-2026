nim = input("Masukkan NIM: ")

digits = []
for c in nim:
    digits.append(int(c))

total = sum(digits)
maks = max(digits)
minim = min(digits)
rata = total / len(digits)

reverse_digits = digits[::-1]

print("Array digit:", digits)
print("Total digit:", total)
print("Nilai maksimum:", maks)
print("Nilai minimum:", minim)
print("Rata-rata digit:", rata)
print("Reverse array:", reverse_digits)
