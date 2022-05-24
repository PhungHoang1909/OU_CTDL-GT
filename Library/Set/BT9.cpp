/*
Tính số lượng tiểu thiểu các ký tự cần thay đổi trong chuỗi str để chuỗi đó có k ký tự khác nhau 
hoặc xuất ra điều đó là không thể.

Chuỗi str chỉ bao gồm những chữ cái latinh viết thường 
và cũng chỉ có thể thay thành những chữ cái latinh viết thường.
*/

string diversity(string str, int k){
	set<char> s;
	int i;
	string ret;
	if (str.size() < k) {
		ret = "impossible";
	} else {
		for (i = 0; i < str.size(); i++) {
			s.insert(str.at(i));
		}
		if (s.size() >= k ) {
			i = 0;
		} else {
			i = k - s.size();
		}
		ret = to_string(i);
	}
	return ret;
}
