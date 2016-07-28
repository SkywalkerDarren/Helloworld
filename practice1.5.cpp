#include <iostream> 
#include <vector>

using namespace std;

int main()
{
	//C-style array
 	const int seq_size = 10;
	int elem_vals[ seq_size ] = {
		0,1,2,3,4,
		5,6,7,8,9,
	};
	//vector C++ Only 
	vector<int> elem_seq( elem_vals, elem_vals+seq_size );
		
	cout << elem_seq[9]; 
	return 0;
}


