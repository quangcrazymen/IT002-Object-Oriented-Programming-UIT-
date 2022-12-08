using namespace std;
class De : public DongVat
{
public:
    De() {
        soLuongCon = random(1, 5);
        soLitSua = random(0, 10);
    }
    string animalName() {
        return "De";
    }
    void keu(){
        cout<<"Dee"<<endl;
    }
};