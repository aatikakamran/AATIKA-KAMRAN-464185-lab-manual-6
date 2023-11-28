#include <iostream>
using namespace std;
int main ()
//
//{ int x=0,y=1,t,s;
//cout<<"enter the number of terms"<<endl;
//cin>>t;
//cout<<" the fibonacci series upto "<<t<< "terms is "<<x<<","<<y;
//for(int i=0;i<=t-3;i++) {
//	s=x+y;
//	x=y;
//	y=s;
//	cout<<","<<s;
//	
//}
//
//
//}

//{
//	int rows,x=1;
//	cout<<"enter the number of rows"<<endl;
//	cin>>rows;
//	cout<<"Pascal's triangle"<<endl;
//	for(int i=1;i<=rows;i++) {
//		for(int j=1;j<=i;j++) {
//			
//			cout<<x<<" ";
//			x=x+1;
//		}
//		cout<<endl;
//	}}


//{
//	int sum=0;
//	bool prime;
//	for (int i=2;i<=50;i++) {
//		prime=true;
//		for(int j=2;j<i;j++) {
//			
//			if ( i%j==0) {
//				prime=false;
//				break;
//			}
//		}
//		if(prime==true) { 
//		sum=sum+i;
//
//	
//		}
//	
//	}
//	cout<<"sum of all prime nos between 1-50 is "<<sum;
//}

//{
//
//    int rows=5;
//    for(int i = 1; i <= rows; ++i) {
//        for(int j = 1; j <= i; ++j) {
//            cout << j <<" ";
//        }
//        cout <<endl;
//    }
//    return 0;
//
//}

{

    int x=1;
    cout<<x;
    for(int i = 0; i <= 6; i+=2) {
        for(int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
