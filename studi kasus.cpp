//Lifa 2100018404
//Dwi Cahyo Nugroho 2100018405
//Qonita Auliya 2100018407
#include<iostream>
using namespace std;
int main (){
    int kode,pri,jml,tot,byr,kbl,uang;
    char mad;
    do 
    {
    cout<<"                MINIMARKET               "<<endl;
    cout<<"         	INDOJUNI    	        "<<endl;
    cout<<"        Aplikasi kasir Minimarket        "<<endl;
    cout<<"============================================"<<endl;
    cout<<""<<endl;
    cout<<"masukkan uang yang anda punya : ";
    cin>>byr;
    cout<<"Menu Makanan        Harga"<<endl;
    cout<<"1. SUSU	              Rp. 10.000"<<endl;
    cout<<"2. POCARI CWET        Rp.  8.000"<<endl;
    cout<<"3. ROTI               Rp. 10.000"<<endl;
    cout<<"4. PERMEN		  Rp. 12.000"<<endl;
    cout<<"5. COKELAT	       Rp.  8.000"<<endl;
    cout<<"6. SHAMPO             Rp.  6.000"<<endl;
    cout<<"7. AIR GELAS          Rp.    500"<<endl;
    cout<<"MASUKKAN PILIHAN ANDA :";
    cin>>kode;
    switch (kode){
    case 1:
        cout<<"SUSU"<<endl;
        pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
            kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 2:
        cout<<"POCARI SWIT"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
            kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 3:
        cout<<"ROTI"<<endl;
            pri=10000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
            kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 4:
        cout<<"PERMEN"<<endl;
            pri=12000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
            kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 5:
        cout<<"COKELAT"<<endl;
            pri=8000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
		kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 6:
        cout<<"SHAMPO"<<endl;
            pri=6000;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
            kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    case 7:
        cout<<"AIR GELAS"<<endl;
            pri=500;
        cout<<"Masukkan Jumlah :";
        cin>>jml;
            tot=pri*jml;
        cout<<"Total harganya yaitu : Rp. "<<tot<<endl;
        cout<<"DIBAYAR : Rp. "<<byr;
    	kbl=byr-tot;
        cout<<"\nKEMBALI : Rp. "<<kbl<<endl;
        cout<<"Masih ada Y/T :";
        cin>>mad;
        break;
    default:
    cout<<"Kode yang anda masukkan tidak ada";
    }
    } 
    while (mad/='Y');
    cout<<"Terimah Kasih Atas Kunjungan Anda INDOJUNI";
    return 0;
}  
