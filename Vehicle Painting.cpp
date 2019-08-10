
#include<iostream>
#include<iomanip>
using namespace std;

enum paint{RED,BROWN,BLACK,WHITE,GRAY}color;
enum vehcles{GM,FORD,TOYOTA,BMW,NISSAN,VOLVO}stock;

void paintOutput(paint);
void vehclesOutput(vehcles);
void input(int arr[6][5]);
void output(int arr[6][5]);

int main()
{
    const int row = 6;
    const int col = 5;
    int arr[row][col];
    input(arr);
    output(arr);
}

void output(int arr[6][5])
{
    system("pause");
    system("cls");
    
    cout<<endl;
    cout<<setw(74)<<"****************Stock of Vehcles********************\n\n"<<endl;
    
    
    cout<<"\t";
    for(color = RED;color<=GRAY;color= paint(color+1))
    {
        
        cout<<setw(15);
        paintOutput(color);
        
    }
    cout<<endl;
    for(stock = GM;stock<=VOLVO;stock= vehcles(stock+1))
    {
        vehclesOutput(stock);
        cout<<"\t";
        for(color = RED;color<=GRAY;color= paint(color+1))
        {
            cout<<setw(15);
            cout<<arr[stock][color];
        }
        cout<<endl;
    }
    system("pause");
}
void input(int arr[6][5])
{
    for(stock = GM;stock<=VOLVO;stock= vehcles(stock+1))
    {
        for(color = RED;color<=GRAY;color= paint(color+1))
        {
            system("cls");
        
            cout<<"Enter the stock of ";
            vehclesOutput(stock);
            cout<<" in ";
            paintOutput(color);
            cout<<" color: ";
            cin>>arr[stock][color];
            cout >> endl;
        }
    }
}
void vehclesOutput(vehcles a)
{
    switch(a)
    {
        case GM:
            cout<<"GM";
        break;
        case FORD:
            cout<<"Ford";
        break;
        case TOYOTA:
            cout<<"Toyota";
        break;
        case BMW:
            cout<<"BMW";
        break;
        case NISSAN:
            cout<<"Nissan";
        break;
        default:
            cout<<"Volvo";
    }
}

void paintOutput(paint a)
{
    switch(a)
    {
        case RED:
            cout<<"RED";
        break;
        case BROWN:
            cout<<"Brown";
        break;
        case BLACK:
            cout<<"Black";
        break;
        case WHITE:
            cout<<"White";
        break;
        default:
            cout<<"Gray";
    }
}
