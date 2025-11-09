#include <iostream>

using namespace std;

int tuplaa(int);
void luvunTulostus(int);

int main() {
    int luku;
    int tulos;
    cout << "Anna positiivinen kokonaisluku" << endl;
    cin >> luku;
    if(luku<0){
        throw runtime_error("Piti antaa positiivinen luku");
    }



=======
    
>>>>>>> d4a2343be13aeba4371f9034d60254187ddcc146
    system("pause");
    return 0;
}

int tuplaa(int a) {
    return a + a;
}
void luvunTulostus(int b){
    cout<<"Tulos="<<b<<endl;
}
