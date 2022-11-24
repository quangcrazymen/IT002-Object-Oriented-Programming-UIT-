for(int i =0;i<n;i++){
    cout<<"So Nhan su:";
    cin>>n;
    NhanSu *tmp;
    switch (expression)
    {
    case 1:
        tmp =new GiangVien();
        break;
    case 2:
        tmp =new TroGiang();
        break;
    default:
        break;
    }
}

float tinhLuong();

void QLNS::xuat(){
    for(NhanSu* nhansu:dsNhanSu){
        nhansu->Xuat();
    }
}

float QLNS::tinhLuong(){
    float TongLuong = 0;
    for(NhanSu *nhansu:dsNhanSu){
        TongLuong+=nhansu->tinhLuong();
    }
}