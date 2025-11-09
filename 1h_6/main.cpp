#include <iostream>

using namespace std;
void doubleit(int *);
int main()
{
    int numbah;
    cout << "Annappa luku" << endl;
    cin>>numbah;
    doubleit(&numbah);

    cout<<"Nyt luku="<<numbah<<endl;

    system("pause");
    return 0;
}

void doubleit(int *a){
    *a=2 * *a;
    cout<<"tuplaa funktiossa luku="<<*a<<endl;

}
