//vector 1
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<int>>vt(27);
//
//void preorder(int node) {
//	if (node == -1) return;
//
//	cout << char(node + 'A');
//
//	preorder(vt[node][0]);
//	preorder(vt[node][1]);
//
//}
//
//void inorder(int node) {
//	if (node == -1) return;
//
//	inorder(vt[node][0]);
//	cout << char(node + 'A');
//	inorder(vt[node][1]);
//
//}
//
//
//void postorder(int node) {
//	if (node == -1) return;
//
//	postorder(vt[node][0]);
//	postorder(vt[node][1]);
//	cout << char(node + 'A');
//}
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		char root, left, right;
//		cin >> root >> left >> right;
//
//		if (left != '.')
//			vt[root - 'A'].push_back(left - 'A');
//
//		else
//			vt[root - 'A'].push_back(-1);
//
//
//
//		if (right != '.')
//			vt[(int)(root - 'A')].push_back((int)(right - 'A'));
//		else
//			vt[(int)(root - 'A')].push_back(-1);
//
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


// vector 2
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<pair<int, int>>vt(27);
//
//void preorder(int node) {
//	if (node == -1) return;
//
//	cout << char(node + 'A');
//	preorder(vt[node].first);
//	preorder(vt[node].second);
//
//}
//
//void inorder(int node) {
//	if (node == -1) return;
//
//	preorder(vt[node].first);
//	cout << char(node + 'A');
//	preorder(vt[node].second);
//
//}
//
//
//void postorder(int node) {
//	if (node == -1) return;
//
//	preorder(vt[node].first);
//	preorder(vt[node].second);
//	cout << char(node + 'A');
//}
//
//int main() {
//
//	int N;
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		char root, left, right;
//		cin >> root >> left >> right;
//
//		if (left == '.' && right != '.')
//		{
//			vt[int(root - 'A')] = { -1,int(right - 'A') };
//		}
//		else if (left != '.' && right == '.')
//		{
//			vt[int(root - 'A')] = { int(left - 'A'),-1 };
//		}
//		else if (left == '.' && right == '.')
//		{
//			vt[int(root - 'A')] = { -1, -1 };
//		}
//		else
//		{
//			vt[int(root - 'A')] = { int(left - 'A'), int(right - 'A') };
//		}
//
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