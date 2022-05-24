/*
An có một danh sách các sản phẩm trong siêu thị nhưng thật không may
trong danh sách lại có những sản phẩm xuất hiện nhiều lần. 
Bạn hãy giúp An làm lại danh sách sao cho một sản phẩm chỉ xuất hiện một lần trong danh sách 
và các sản phẩm xuất hiện theo thứ tăng dần trong từ điển.
*/

vector<string> getDistinctProducts(vector<string> products){
	set<string> distinctProducts;
    vector<string> ret;
    for (int i = 0; i < products.size(); i++) {
        distinctProducts.insert(products.at(i));
    }
    for (set<string>::iterator it = distinctProducts.begin(); it != distinctProducts.end(); it++) {
        ret.push_back(*it);
    }
    return ret;
}