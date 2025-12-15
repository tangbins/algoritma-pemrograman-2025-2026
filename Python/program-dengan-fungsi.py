# Variabel global untuk menyimpan data buku
buku = []

# Fungsi untuk menampilkan semua data
def show_data():
    if len(buku) == 0:
        print("BELUM ADA DATA")
    else:
        for indeks in range(len(buku)):
            print(f"[{indeks}] {buku[indeks]}")

# Fungsi untuk menambah data
def insert_data():
    buku_baru = input("Judul Buku: ")
    buku.append(buku_baru)
    print("Data berhasil ditambahkan!")

# Fungsi untuk edit data
def edit_data():
    show_data()
    indeks = int(input("Inputkan ID buku: "))

    if indeks < 0 or indeks >= len(buku):
        print("ID salah")
    else:
        judul_baru = input("Judul baru: ")
        buku[indeks] = judul_baru
        print("Data berhasil diubah!")

# Fungsi untuk menghapus data
def delete_data():
    show_data()
    indeks = int(input("Inputkan ID buku: "))

    if indeks < 0 or indeks >= len(buku):
        print("ID salah")
    else:
        del buku[indeks]
        print("Data berhasil dihapus!")

# Fungsi untuk menampilkan menu
def show_menu():
    print("\n----------- MENU ----------")
    print("[1] Show Data")
    print("[2] Insert Data")
    print("[3] Edit Data")
    print("[4] Delete Data")
    print("[5] Exit")

    menu = int(input("PILIH MENU> "))
    print()

    if menu == 1:
        show_data()
    elif menu == 2:
        insert_data()
    elif menu == 3:
        edit_data()
    elif menu == 4:
        delete_data()
    elif menu == 5:
        exit()
    else:
        print("Salah pilih!")

# Program utama
if __name__ == "__main__":
    while True:
        show_menu()
