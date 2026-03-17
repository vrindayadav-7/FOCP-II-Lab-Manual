#include<iostream>
using namespace std;

int z=0;
void update()
{
    static int z=1;
    z--;//z++ too
    cout<<z<<endl;
}
int main(){
update();
update();
update();
return 0;
}