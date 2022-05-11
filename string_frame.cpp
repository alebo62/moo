#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using std::string;
using std::vector;

typedef vector<string>::size_type sz;
sz max_len(const vector<string>& );

vector<string> frame(const vector<string> vs)
{
    vector<string> v;
    sz maxlen = max_len(vs);
    string first_last = string(maxlen + 4, '*');
    v.push_back(first_last);
    for(sz i = 0; i < v.size(); i++)
        v.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
    v.push_back(first_last);
    return v;
}

sz max_len(const vector<string>& vs)
{
    sz len = 0;
    for(int i = 0; i < vs.size(); i++)
        len = vs[i].size() > len ? vs[i].size(): len;
    return len;
}

vector<string> vcat(const vector<string> vtop, const vector<string> vbottom)
{
    vector<string> v = vtop;

    for(sz i = 0; i != vbottom.size(); i++)
        v.push_back(vbottom[i]);
    //v.insert(v.end(), vbottom.begin(), vbottom.end());
    return v;
}

vector<string> hcat(const vector<string> vleft, const vector<string> vright)
{
    vector<string> v;
    string::size_type width1 = max_len(vleft) + 1;

    sz i = 0, j = 0;

    while( i < vleft.size() || j < vright.size()) {
        string s;
        if(i != vleft.size())
            s = vleft[i++];
        s += string(width1 - s.size() ,' ');
        if(j != vright.size())
            s = vright[j++];
        v.push_back(s);
    }
    return v;
}


