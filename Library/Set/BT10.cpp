/*
Bạn có một dãy từ Aramic. Hãy đưa ra số lượng đối tượng khác nhau trong dãy đó.
*/

int aramic(std::vector<std::string> words)
{
    set<string> s;
    for (int i = 0; i < words.size(); i++) {
        string str = words[i];
        set<char> ch;
        for (int j = 0; j <str.length(); j++) {
            ch.insert(str[j]);
        }
        string e = "";
        for (auto x:ch) e+=x;
        s.insert(e);
    }
    return s.size();
}
