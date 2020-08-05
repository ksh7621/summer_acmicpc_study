
//#include <iostream>
//using namespace std;
//int arr[26][2];
//
//void preorder(int node) {
//	if (node == -1) return;
//
//	cout << char(node + 'A');
//	preorder(arr[node][0]);
//	preorder(arr[node][1]);
//
//}
//
//void inorder(int node) {
//	if (node == -1) return;
//
//	
//	inorder(arr[node][0]);
//	cout << char(node + 'A');
//	inorder(arr[node][1]);
//
//}
//
//
//void postorder(int node) {
//	if (node == -1) return;
//
//
//	postorder(arr[node][0]);
//	postorder(arr[node][1]);
//	cout << char(node + 'A');
//}
//
//int main() {
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		char root, left, right;
//		cin >> root >> left >> right;
//
//		arr[root - 'A'][0] = left != '.' ? left - 'A' : -1;
//		arr[root - 'A'][1] = right != '.' ? right - 'A' : -1;
//	}
//
//	preorder(0);
//	cout << endl;
//	inorder(0);
//	cout << endl;
//	postorder(0);
//	cout << endl;
//
//	return 0;
//}

