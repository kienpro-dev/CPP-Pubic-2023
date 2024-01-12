
//Sáng  

//#include <iostream >
//using namespace std;
//
//int tinh_tong_hai_so(int o,int i){
//	cout<<"Day la so ban moi truyen vao trong ham :"<<o<<endl;
//	cout<<"Day la so ban moi truyen vao trong ham :"<<i<<endl;
//	
//	return o+i;
//}
//
//void Swap(int m , int &n){
//	int temp = m;
//	m = n;
//	n = temp;
//	cout<<"m: "<<&m<<endl;
//	cout<<"n: "<<&n<<endl;
//	cout<<"m: "<<m<<endl;
//	cout<<"n: "<<n<<endl;
//}
//
//void NhapMang (int a[], int &n) {
//	cin >> n;
//	cout << "nhap cac ptu cua mang: " << endl;
//	for (int i=0; i<n; i++) {
//		cin >> a[i];
//	}
//}
//
//void XuatMang (int a[], int n) {
//	cout << "Mang ban vua nhap: " << endl;
//	for (int i=0; i<n; i++) {
//		cout << a[i] << " ";
//	}
//}
//
//void SapXep (int a[], int n) {
//	int tg;
//	cout << "Mang sap xep tu be den lon: ";
//	for (int i=0; i<n-1; i++) {
//		for (int j=i+1; j<n; j++) {
//			if (a[i] > a[j]) {
//				tg = a[i];
//				a[i] = a[j];
//				a[j] = tg;
//			}
//		}
//	}
//	XuatMang(a,n)
//}
//
//int main(){
////	int n;
////	int m;
////	cout<<"Nhap so ban muon:";
////	cin>>m;
////	cin>>n;
//	
////	cout<<"Tong hai so ban vua nhap la: "<<tinh_tong_hai_so(m,n);
////	int t = tinh_tong_hai_so(7,8);
//
////	Swap(m,n);int i;cin>>i;
////	cout<<"m: "<<&m<<endl;
////	cout<<"n: "<<&n<<endl;
////	cout<<"m: "<<m<<endl;
////	cout<<"n: "<<n<<endl;
//	
////	int n;//0
////	int a[100];
////	
////	NhapMang(a,n);//9
////	XuatMang(a,n);//9
////	cout << endl;
////	SapXep(a,n);
//	
//	return 0;	
//}

//Chiều 

#include <iostream >
using namespace std; 

//int mu3(int a, int b, int c){
//	int tg = -1e9;
//	if (a > tg)
//	{
//		tg = a;
//	}
//	if (b > tg)
//	{
//		tg = b;
//	}
//	if (c > tg)
//	{
//		tg = c;
//	}
//	return tg;
//}
void print(int n){
	if(n == 1){
		cout<<"Hello!\n";
	}
	else {
		cout<<"Goodbye!";
	}
}
//void showMessage(string text, int times = 1) {
//    for (int i = 0; i < times; ++i) {
//        cout << text << "\n";
//    }
//}
void swap(int &a, int &b){
	print(b);
	int tg=a;
	a=b;
	b=tg;
	cout<<a<<" a: "<<&a<<endl;
	cout<<b<<" b: "<<&b<<endl;
} 
//De quy 
int giaithua(int n){
	if(n==1){
		return 1;
	} else return n * giaithua(n-1);//4*3*2*1
}

//truong hop chay vo han
void printHello(){
	cout<<"Hello!\n";
	printHello();
}
int main(){
	
	int a, b, c; 
//	cin>>a >> b >> c;
//	cout<<"n mu 3 la: "<<mu3(n)<<endl;
//	int m = mu3(n);
//	print(n);
//	cout << mu3(a, b,c);
//	showMessage("Hello cac ban =))",6);
	
//	cin >> a >> b;
//	swap (a,b);
//	cout<<a<<" a: "<<&a<<endl;
//	cout<<b<<" b: "<<&b<<endl;
//	cout<<"Giai thua cua a: "<<giaithua(a);
//	printHello();
	return 0;	
} 









