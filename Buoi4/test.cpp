#include <bits/stdc++.h>
using namespace std ;
int main()
{
	/* Cú pháp khai báo mảng
        Kieu_du_lieu Ten_mang[So_phan_tu] ;

        Ví dụ
        int a[10] ; Mảng a gồm 10 phần tử là số nguyên
        float b[100] ; Mảng b gồm 100 phần tử là số thực
        char c[50] ; Mảng c gồm 50 phần tử là ký tự

        int a[5] = {1 , 2 , 3 , 4 , 5} ; Mảng a có 5 phần tử là 1 , 2 , 3 , 4 , 5
        int a[10] = {1 , 2 , 3 , 4 , 5} ; Mảng a có 10 phần tử là 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10
        int a[5] = {0} ; Mảng a gồm 5 phần tử đều bằng 0
        int a[5] = {1} ; Mảng a gồm 5 phần tử là 1 , 0 , 0 , 0 , 0

        int a[] = {1 , 2 , 3 , 4 , 5} ;
        Ta có thể bỏ số lượng phần tử ở cặp dấu đóng mở ngoặc vuông
        Nhưng phải triển khai rõ các phần tử của mảng
        Số phần tử của mảng lúc này = sizeof(a) / sizeof(int) (a là tên mảng , int là kiểu dữ liệu của mảng)

	*/

	/*
          Truy cập phần tử trong mảng
          Để truy cập phần tử trong mảng ta sẽ truy cập thông qua chỉ số

          Ví dụ mảng có n phần tử thì vị trí truy cập hợp lệ là từ 0 đến n - 1

          int a[5] = {10 , 20 , 30 , 40 , 50} ;
          cout << a[0] << endl ; // 10
          cout << a[1] << endl ; // 20
          cout << a[2] << endl ; // 30
          cout << a[3] << endl ; // 40
          cout << a[4] << endl ; // 50

          Nếu ta truy cập vào các chỉ số nằm ngoài đoạn từ 0 đến n - 1 (Ví dụ -1 hay n , n + 1..)
          thì ta sẽ truy cập vào phần tử rác nào đó k thuộc phạm vi quản lý của mảng a
	*/

	/*
          Khai báo mảng gồm n phần tử
          int n ; cin >> n ; // n là số phần tử của mảng
          int a[n] ; // Khai báo mảng a gồm n phần tử
          * Lưu ý : Trong các IDE như DevC++ , CodeBlocks.. Ta có thể khai báo như vậy được
                    Nhưng trong Visual Studio (Màu tím tím :v) thì ta sẽ khai báo theo cách như sau
          const int length = 1000000 ;
          int a[length] ;

          Nhập mảng a gồm n phần tử từ bàn phím
          int n ; cin >> n ; // n là số phần tử của mảng
          int a[n] ;
          for(int i = 0 ; i < n ; i++)
          {
               cin >> a[i] ;
          }

          Ta dùng vòng for duyệt từ 0 đến n - 1 bởi vì vị trí truy cập hợp lệ của mảng a có n
          phần tử là 0 đến n - 1

          Tương tự như vậy ta có thể in mảng ra bằng cách sử dụng vòng for
          for(int i = 0 ; i < n ; i++)
          {
               cout << a[i] << " " ;
          }

          Hoặc ta cũng có thể in ngược mảng bằng cách sau
          for(int i = n - 1 ; i >= 0 ; i--)
          {
               cout << a[i] << " " ;
          }
	*/

	/*
          Bài tập 1: Cho mảng a gồm n phần tử , hãy tính tổng các phần tử trong mảng
          int n ; cin >> n ;
          int a[n] ; // Khai bao mang a co n ptu
          long long sum = 0 ; // Khai bao bien de luu tru ket qua
          // Nhap mang
          for(int i = 0 ; i < n ; i++)
               cin >> a[i] ;

          // Tinh tong
          for(int i = 0 ; i < n ; i++)
               sum += a[i] ;
          cout << sum << endl ;

          Bài tập 2: Cho mảng a gồm n phần tử , hãy tính tổng
          +) Các phần tử chẵn trong mảng
          +) Các phần tử ở vị trí (tính từ 0) chẵn trong mảng

          int n ; cin >> n ;
          int a[n] ;
          for(int i = 0 ; i < n ; i++)
               cin >> a[i] ;
          long long sum1 = 0 , sum2 = 0 ;
          // Tinh tong cac phan tu chan
          for(int i = 0 ; i < n ; i++)
          {
               if(a[i] % 2 == 0)
                    sum1 += a[i] ;
          }
          // Tinh tong cac phan tu o vi tri chan
          for(int i = 0 ; i < n ; i++)
          {
               if(i % 2 == 0)
                    sum2 += a[i] ;
          }
          cout << sum1 << " " << sum2 << endl ;

          Bài tập 3: Cho mảng a gồm n phần tử , hãy tìm phần tử lớn nhất và nhỏ nhất trong mảng

          int n ; cin >> n ;
          int a[n] ;
          for(int i = 0 ; i < n ; i++)
          {
               cin >> a[i] ;
          }
          int maxn = a[0] , minn = a[0] ;
          for(int i = 1 ; i < n ; i++)
          {
               if(maxn < a[i])
                    maxn = a[i] ;
               if(a[i] < minn)
                    minn = a[i] ;
          }
          cout << maxn << " " << minn ;
	*/

	/*
          Thao tác chèn mảng
          int n ; cin >> n ;
          int a[n] ;
          for(int i = 0 ; i < n ; i++)
               cin >> a[i] ;
          int index , value ;
          cin >> index >> value ; // Nhập vị trí và giá trị cần chèn
          int b[n + 1] ;
          for(int i = 0 ; i < n + 1 ; i++)
          {
               if(i < index)
                    b[i] = a[i] ;
               else if(i > index)
                    b[i] = a[i - 1] ;
               else
                    b[i] = value ;
          }
          for(int i = 0 ; i < n + 1 ; i++)
               cout << b[i] << " " ;

          Vị trí chèn hợp lệ : 0 -> n
	*/

	/*
          Thao tac xoa mang
          int n ; cin >> n ;
          int a[n] ;
          for(int i = 0 ; i < n ; i++)
               cin >> a[i] ;
          int index ; cin >> index ; // Nhập vị trí cần xóa
          int b[n - 1] ;
          for(int i = 0 ; i < n - 1 ; i++)
          {
               if(i < index)
                    b[i] = a[i] ;
               else
                    b[i] = a[i + 1] ;
          }
          for(int i = 0 ; i < n - 1 ; i++)
               cout << b[i] << " " ;

          Vị trí xóa hợp lệ : 0 -> n - 1
	*/
	return 0 ;
}
