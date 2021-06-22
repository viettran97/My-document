
== Hàm strcmp() trong C được sử dụng để so sánh 2 chuỗi. 
Nếu hàm strcmp(str1, str2) trả về 0 thì 2 chuỗi bằng nhau, lớn hơn 0 thì chuỗi str1 lớn hơn chuỗi str2 và ngược lại nếu nhỏ hơn 0 thì chuỗi str1 nhỏ hơn str2. 

==The strcasecmp() function compares string1 and string2 without sensitivity to case. All alphabetic characters in string1 and string2 are converted to lowercase before comparison.

hàm c_str(): chuyển string thành một mảng các kí tự
-Hàm c_str () được sử dụng để trả về một con trỏ đến một mảng có chứa một chuỗi ký tự kết thúc bằng rỗng biểu thị giá trị hiện tại của chuỗi.

	Segfault là lỗi truy cập bộ nhớ do:
	+ Truy cập bộ nhớ không được cấp phát
	+ Truy cập biến đã được giải phóng
	+ ghi vào phần chỉ đọc của bộ nhớ.
	
- strcat(): nối 2 chuỗi trong C.
- strlwr(): trả về chuỗi chữ thường
- strlwr(): trả về chuỗi chữ hoa
- strrev(): trả về chuỗi đảo ngược.
- strstr(): trả về con trỏ trỏ đến lần xuất hiện đầu tiên của chuỗi được khớp trong chuỗi đã cho.
- Enum trong c: là kiểu dữ liệu do người dùng định nghĩa, nó dùng để khai báo các kiểu liệt kê .
cú pháp: enum enum_name {constant1 , constant2, constant3}.
- strrch(): trả về vị trí xuất hiện đầu tiên của một kí tự trong chuỗi.(con trỏ trỏ tới vị trí của kí tự đó).
- fgets(char *str, int n, FILE *fp): Đọc một dãy kí tự từ file fp vào vùng nhớ (str), kết thúc khi đủ n -1 kí tự hoặc gặp kí tự xuống dòng.
- int fseek(FILE *stream, long offset, int origin): fseek () được sử dụng để di chuyển con trỏ tệpđến một vị trí cụ thể.
stream: con trỏ file

offset: Số byte sẽ di chuyển con trỏ file từ vị trí origin

origin: vị trí ban đầu của con trỏ file. Dưới đây là một số hằng số đã được định nghĩa sắn trong thư viện stdio.h

SEEK_CUR: vị trí hiện tại của con trỏ file

SEEK_END: vị trí cuối file

SEEK_SET: vị trí đầu file
**Hàm fseek( ) dịch con trỏ file tới vị trí mong muốn.

    Hàm fseek( ) trả về 0 nếu dịch con trỏ file thành công
    Hàm trả về giá trị khác 0 nếu xảy ra lỗi.

????????????????????????
////// CHAR* <===> STRING
1. char* :
ex: char* str = "This is GeeksForGeeks";

Only one pointer is required to refer to whole string. That shows this is memory efficient.
No need to declare the size of string beforehand.

This works fine in C but writing in this form is a bad idea in C++. That’s why compiler shows warning
of “deprecated conversion from string constant to ‘char*'” because in C string literals are arrays of char but
in C++ they are constant array of char. Therefore use const keyword before char*.

const char* str = "This is GeeksForGeeks";

* We cannot modify the string at later stage in program. We can change str to point something else but cannot change value present at str
ex: const char* str1 = "Hello";
str[1] = 'o'; 
==> Segmentation Fault error

2. String
ex: 
string s1 = "Hello"; 
string s2 = "World"; 
	// concatenate string using + operator. 
    s1 = s1 + s2; 
    cout << s1 << endl; // HelloWorld 
	// append string 
    s1.append("Geeks"); 
    cout << s1 << endl; // HelloWorldGeeks 
	
3. Char[]
* We can modify the string at later stage in program.
ex: 
	char str[] = "Hello"; 
    // or char str1[]={'H', 'e', 'l', 'l', 'o', '\0'}; 
  
    // modify string to "Hollo" 
    str[1] = 'o'; 
==> No Segmentation Fault error 
This is statically allocated sized array which consumes space in the stack.
We need to take the large size of array if we want to concatenate or manipulate with other strings since the size of string is fixed. 
We can use C++ standard library cstring or string.h for that purpose. 
////////////////////////////////
1. danh sách liên kết đơn (Single Linked List)):
- Danh sách liên kết đơn (Single Linked List) là một cấu trúc dữ liệu động, nó là một danh sách mà mỗi phần tử đều liên kết với phần tử đúng sau nó trong danh sách. Mỗi phần tử (được gọi là một node hay nút) trong danh sách liên kết đơn là một cấu trúc có hai thành phần:
    Thành phần dữ liệu: lưu thông tin về bản thân phần tử đó.
    Thành phần liên kết: lưu địa chỉ phần tử đứng sau trong danh sách, nếu phần tử đó là phần tử cuối cùng thì thành phần này bằng NULL.
- Đặc điểm của danh sách liên kết đơn

    Được cấp phát bộ nhớ khi chạy chương trình
    Có thể thay đổi kích thước qua việc thêm, xóa phần tử
    Kích thước tối đa phụ thuộc vào bộ nhớ khả dụng của RAM
    Các phần tử được lưu trữ ngẫu nhiên (không liên tiếp) trong RAM
	
    Chỉ cần nắm được phần tử đầu và cuối là có thể quản lý được danh sách
    Truy cập tới phần tử ngẫu nhiên phải duyệt từ đầu đến vị trí đó
    Chỉ có thể tìm kiếm tuyến tính một phần tử
- Cài đặt danh sách liên kết đơn
	+ Tạo node: Danh sách liên kết đơn được tạo thành từ nhiều node, một node gồm hai thành phần là thành phần dữ liệu và thành phần liên kết
	Thành phần dữ liệu có thể là kiểu dữ liệu có sẵn hoặc bạn tự định nghĩa (struct hay class…), Thành phần liên kết là địa chỉ đương nhiên sẽ là con trỏ, con trỏ này trỏ đến node tiếp theo, do đó, con trỏ này là con trỏ trỏ vào một node.
	/////////////////////////////////////////
- Biến tĩnh hay biến được cấp phát tĩnh là biến được khai báo bằng cú pháp khai báo biến, có tên và được cấp phát một vùng nhớ cố định trước khi sử dụng. 
Vùng nhớ cố định ở đây nghĩa là vùng nhớ đó luôn tồn tại khi chương trình thực thi, không thể được xóa đi (tức trả lại cho hệ điều hành) hoặc là thay đổi kích thước (đối với mảng), sau khi kết thúc chương trình sẽ tự động trả vùng nhớ đó lại cho hệ điều hành.
- Biến động hay biến được cấp phát động là biến thuộc một kiểu dữ liệu đã định nghĩa, không có tên, không được khai báo trong phần khai báo biến. Điều này có nghĩa là biến động là một biến được cấp phát một vùng nhớ trong bộ nhớ RAM, không được liên kết với tên biến do đó nó không có tên, nó chỉ là một vùng nhớ. 
Việc quản lý biến động được thực hiện qua con trỏ.
- Biến con trỏ: Biến con trỏ hay thường gọi là con trỏ là biến dùng để lưu trữ giá trị là địa chỉ ô nhớ. 
Nghĩa là bản thân con trỏ là một biến thông thường nhưng mà nó chứa địa chỉ của biến tĩnh hoặc biến động.Do con trỏ chỉ chứa địa chỉ nên mọi con trỏ đều có kích thước như nhau.
- Nhớ là kiểu con trỏ là kiểu gì thì ta chỉ được trỏ tới biến kiểu đó, ví dụ không thể đem một con trỏ int mà trỏ vào biến kiểu double được. 
Biến con trỏ không có kiểu riêng mà chỉ phụ thuộc vào đối tượng mà nó trỏ đến, do đó khi chưa xác định được kiểu dữ liệu của đối tượng trỏ đến, ta dùng kiểu void.
- Hằng con trỏ và đối tượng hằng
 + Biến con trỏ cũng giống như một biến bình thường nhưng dùng để lưu trữ địa chỉ, con trỏ cũng có hằng con trỏ như hằng bình thường. Hằng con trỏ sẽ được khởi tạo giá trị một lần duy nhất và không được gán lại giá trị mới, hay nói cách khác là chỉ trỏ đến một đối tượng duy nhất mà thôi. 
 Cú pháp khai báo tương tự con trỏ nhưng có từ khóa const phía trước tên biến
 ex hằng con trỏ:
	int a = 2409;
	int b = 2001;
	int *const ptr_a = &a; // con trỏ ptr_a trỏ đến biến a
	ptr_a = &b; // lỗi vì ptr_a là hằng con trỏ, không thể gán giá trị khác được
 + Đối tượng hằng tức là một con trỏ mà ta không thể sử dụng toán tử * để gán lại giá trị tại vùng nhớ mà nó trỏ tới. Đối tượng hằng vẫn có thể trỏ đến đối tượng khác được.
	ex :
	int a = 2409;
	const int *ptr_a = &a; // con trỏ otr_a trỏ đến biến a
	*ptr_a = 2001; // lỗi vì ptr_a là đối tượng hằng, không thể gán giá trị qua toán tử *

==> Bạn không muốn thay đổi giá trị và cũng không muốn tham chiếu lại vào biến khác bạn có thể kết hợp cả hai như sau:
	int a = 2409;
	const int *const ptr_a = &a;
- Con trỏ NUll
	Con trỏ NULL (NULL pointer) hay con trỏ trỏ vào NULL là con trỏ không trỏ vào đâu cả, nó khác với con trỏ chưa được khởi tạo. 
	Bởi vì khi được khai báo, con trỏ không được khởi tạo giá trị thì sẽ mang giá trị rác. Do đó, khi làm việc với con trỏ, khi chưa trỏ vào đâu cả thì ta nên khởi gán con trỏ đó bằng NULL (vì nếu không may, ta thực hiện truy xuất đến vùng nhớ rác không tồn tại sẽ gây ra kết quả không mong muốn)
	ex:
	int *ptr_a = 0;    // ptr_a là con trỏ NULL
	int *ptr_b = NULL; // NULL là macro định nghĩa sẵn bằng 0, tức là NULL
	Trong C++ 11 còn có
	int *ptr_a = nullptr;
- Cấp phát động
	+ Để cấp phát vùng nhớ cho một biến động ta làm như sau:
	new <kiểu_dữ_liệu>;
	// Ví dụ
	new int;
	new float;
	Nếu như cấp phát vùng nhớ thành công, toán tử new sẽ trả về một con trỏ trỏ tới địa chỉ của vùng nhớ mới. Và như đã nói ở trên, biến động không có tên do đó nó được quản lý bằng con trỏ, vậy nên khi tạo biến động ta gán luôn địa chỉ của nó cho con trỏ như sau:
	int *ptr = new int; // con trỏ ptr lúc này đang trỏ tới biến động kiểu int đã được tạo
	// Bạn cũng có thể khởi tạo giá trị ngay khi khai báo như sau
	int *ptr1 = new int(2409);
- Mảng động
	+ Cấp phát mảng động:
	new <kiểu_dữ_liệu_của_mỗi_phần_tử>[size];
	// ví dụ
	new int[100];
	+ Hệ điều hành sẽ cấp phát cho biến động một dãy các vùng nhớ liền kề nhau, mỗi vùng nhớ có kích thước bằng với kích thước của phần tử của mảng đó. Tương tự với mảng thông thường bạn vẫn phải cung cấp kích thước mảng và kích thước đó phải là hằng. 
	Và cũng tương tự như biến động thông thường, bạn vẫn quản lý thông qua con trỏ như sau:
	int *myArr = new int[100];
	+ Đối với mảng động, toán tử new sẽ trả về con trỏ trỏ vào ô nhớ đầu tiên của vùng nhớ được cấp phát cho mảng đó. 
	Việc thao tác với mảng động thực hiện qua con trỏ cũng tương tự như đối với mảng thông thường như sau:
	myArr[0] = 1;
	myArr[1] = 2;
	+ Vậy thì việc thay đổi kích thước mảng thực hiện ra làm sao? Bạn sẽ không có phương thức hỗ trợ nào mà phải làm thủ công. 
	Tức là bạn sẽ phải tạo một mảng mới với kích thước phần tử mới, sau đó copy phần tử sang mảng mới và xóa mảng cũ đi
==> Về bản chất, mảng thông thường thật ra chính là một mảng động được một hằng con trỏ trỏ tới:
	int *const arr = new int[10];
- Con trỏ trỏ vào con trỏ
	+ Con trỏ cũng giống như một biến thông thường nên nó sẽ có địa chỉ, do đó, một con trỏ có thể được một con trỏ khác trỏ tới. Ví dụ;
	int *a = new int(2409);
	int **ptr_a = &a; // con trỏ ptr_a trỏ vào con trỏ a
- Con trỏ và hàm
	+ Con trỏ là một kiểu dữ liệu, do đó nó có thể được sử dụng trong lúc truyền tham số cho hàm hoặc kiểu dữ liệu trả về.
	+ Khi hàm có kiểu trả về là một con trỏ thì cuối hàm mình phải retrun về một địa chỉ vì con trỏ chúa dịa chỉ của vùng nhớ mà nó trỏ đến

- Con trỏ hàm (function pointer), Để khai báo một con trỏ hàm, ta sử dụng cú pháp sau:
	+ <kiểu_dữ_liệu> (*<tên_con_trỏ>)([các_tham_số]);
	// Ví dụ
	int (*funcPtr_sum)(int a, int b);
	// Bạn có thể đặt tên tham số hoặc là không như thế này
	int (*funcPtr_sum)(int, int);
	+ Bạn có thể hiểu đơn giản rằng <kiểu_dữ_liệu> chính là kiểu dữ liệu mà hàm trả về, 
	<tên_con_trỏ> là tên hàm, dấu ngoặc tròn “()” bên ngoài là bắt buộc để nói cho compiler biết đó là một con trỏ hàm và các tham số truyền vào giống như tham số truyền vào hàm vậy thôi và được đặt trong dấu ngoặc tròn.
	+ Để trỏ tới một hàm, các bạn làm như sau:
	int sum(int a, int b)
	{
		return a + b;
	}

	funcPtr_sum = sum;     // nên dùng
	// Hoặc có thể dùng toán tử &
	funcPtr_sum = ∑
	// Cả hai đều tương đương như sau
****Các kiểu dữ liệu và tham số của con trỏ hàm phải tương đương với các tham số và kiểu dữ liệu trả về của hàm mà các bạn muốn trỏ tới.
	+ Và để gọi hàm mà con trỏ đó trỏ tới, bạn chỉ cần thực hiện như cách sau:
	funcPtr_sum(4, 5);    // được 9, nên dùng cách này
	// Hoặc dùng theo cách "con trỏ style"
	(*funcPtr_sum)(3, 4); // được 7
	+ Để thực hiện truyền con trỏ hàm cho hàm, ta cũng thực hiện truyền như truyền một con trỏ thông thường. Hãy xem ví dụ sau để hiểu rõ hơn:
	int sum(int a, int b)
	{
		return a + b;
	}

	void myFunc(int (*func_ptr)(int, int))
	{
		func_ptr(4, 5);
	}

	// bên trong hàm main
	int (*funcPtr_sum)(int, int) = sum;
	myFunc(funcPtr_sum);        // được 9
********Có một só điều bạn cần lưu ý về con trỏ hàm như sau:
	Không như con trỏ thông thường, con trỏ hàm không phải là con trỏ trỏ vào vùng nhớ mà nó trỏ vào code. Có thể hiểu là nó trỏ vào điểm bắt đầu của một hàm hoặc là nó đang tham chiếu đến hàm đó và nó là nick name của hàm đó, do đó ta có thể gọi nó thay vì trực tiếp gọi hàm.
    Con trỏ hàm không cần cấp phát hay giải phóng vì nó không trỏ vào vùng nhớ.
    Bạn có thấy ở ví dụ trên mình có thể sử dụng toán tử & hoặc không, và cũng tương tự đối với việc sử dụng toán tử *. Đó là do tên hàm có thể được sử dụng để lấy địa chỉ (hay điểm bắt đầu) của hàm, do đó tên hàm giống như đã bao gồm toán tử & rồi.
    Giống như một con trỏ thông thường, ta cũng có thể có một mảng con trỏ hàm. Con trỏ hàm cũng có thể được sử dụng như để rẽ nhánh như sau:
    Giống như con trỏ thông thường, con trỏ hàm có thể được truyền cho hàm, giống như ví dụ bên trên. Loại con trỏ này rất thường đường sử dụng trong C++.
- Con trỏ và dối tượng
	+ Con trỏ không có kiểu dữ liệu cụ thể mà phụ thuộc vào đối tượng nó trỏ vào, do đó nó có thể là bất kỳ bao gồm kiểu dữ liệu do người dùng định nghĩa như struct hay class. Ví dụ:
	struct MyStruct
	{
		int count;
	};
	MyStruct mStruct;
	mStruct.count = 5;
	MyStruct *ptr = &mStruct;
	+ Thông thường để gọi một thuộc tính hay một phương thức của một đối tượng, ta sử dụng dấu chấm (.), nhưng đối với con trỏ khi đã trỏ đến đối tượng, ta sử dụng dấu mũi tên (->) như sau:
	// Biến thông thường
	cout << mStruct.count; // 5
	// thông qua con trỏ
	cout << ptr->count;      // 5
	+ Ta cũng có thể thực hiện cấp phát động như sau:
	MyStruct *ptr_struct = new MyStruct;
	MyClass *ptr_class = new MyClass(5);

/////////////////////////////////
Nạp chồng hàm, nạp chồng toán tử
- Nạp chông hàm(Function Overloading): Kỹ thuật này cho phép sử dụng cùng một tên gọi cho các hàm “giống nhau” (có cùng mục đích). 
Nhưng khác nhau về kiểu dữ liệu tham số hoặc số lượng tham số.
- Nạp chồng toán tử:

//////////////////
Cây tìm kiếm nhị phân
- Cây tìm kiếm nhị phân(TA: Binary Search Tree – viết tắt: BST) – là một cây nhị phân và có thêm các ràng buộc sau đây:
    Giá trị của tất cả các Node ở cây con bên trái phải <= giá trị của Node gốc.
    Giá trị của tất cả các Node ở cây con bên phải phải > giá trị của Node gốc.
    Tất cả các cây con(bao gồm bên trái và phải) cũng đều phải đảm bảo 2 tính chất trên.
    Nó được gọi là cây nhị phân vì mỗi Node của cây chỉ có tối đa hai con
    Nó được gọi là cây tìm kiếm nhị phân vì nó có thể được sử dụng để tìm kiếm sự hiện diện của một phần tử trong thời gian O(log (n)).
- Cài đặt cây BST



