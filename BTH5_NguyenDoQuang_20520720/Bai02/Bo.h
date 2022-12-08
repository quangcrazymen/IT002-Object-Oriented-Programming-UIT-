class Bo : public DongVat {
public:
    Bo() {
        soLuongCon = random(1, 5);
        soLitSua = random(0, 20);
    }
    string animalName() {
        return "BO";
    }
    void keu(){
        cout<<"Boo"<<endl;
    }
};