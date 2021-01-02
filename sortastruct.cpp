#include <iostream>
using namespace std;

struct a
{
    int a, b, c;
    void in()
    {
        cin >> a >> b >> c;
    }
    void out()
    {
        cout << a << " " << b << " " << c << endl;
    }
};
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;
    a value[n];
    for (int i = 0; i < n; i++)
    {
        value[i].in();
    }
    int type;
    cin >> type;
    switch (type)
    {
    case 1:
        for (int i = 0; i < n; i++){
            for (int k = 0; k < n-1; k++)
            {
                if(value[k].a > value[k+1].a )
                {
                    swap(value[k].a, value[k + 1].a);
                    swap(value[k].b, value[k + 1].b);
                    swap(value[k].c, value[k + 1].c);
                }
            }
            
        }
            break;
    case 2:
        for (int i = 0; i < n; i++){
            for (int k = 0; k < n-1; k++)
            {
                if(value[k].b > value[k+1].b )
                {
                    swap(value[k].a, value[k + 1].a);
                    swap(value[k].b, value[k + 1].b);
                    swap(value[k].c, value[k + 1].c);
                }
            }
            
        }
            break;
    case 3:
        for (int i = 0; i < n; i++){
            for (int k = 0; k < n-1; k++)
            {
                if(value[k].c > value[k+1].c )
                {
                    swap(value[k].a, value[k + 1].a);
                    swap(value[k].b, value[k + 1].b);
                    swap(value[k].c, value[k + 1].c);
                }
            }
            
        }
            break;
    default:
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        value[i].out();
    }    
    return 0;
}