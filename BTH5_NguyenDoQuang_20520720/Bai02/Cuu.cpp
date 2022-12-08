class Cuu : public DongVat {
public:
    Cuu() {
        soLuongCon = random(1, 5);
        soLitSua = random(0, 5);
    }
    string animalName() {
        return "COU";
    }
    void keu(){
        cout<<"Cuuu"<<endl;
    }
};