#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using std::string;
using std::vector;

vector<string> split_str(const string& s)
{
    vector<string> vs;
    typedef string::size_type sz;
    sz i = 0;

    while(i != s.length()) {
        while(i != s.length() && isspace(s[i]))
            i++;
        sz j = i;
        while(j != s.length() && !isspace(s[j]))
            j++;
        if(j != i) {
            vs.push_back(s.substr(i, j - i));
            i = j;
        }
    }
    return vs;
}

bool space(char c)
{
    return isspace(c);
}

bool not_space(char c)
{
    return !isspace(c);
}

vector<string> split_str2(const string& s)
{
    vector<string> vs;
    typedef string::const_iterator iter;
    iter i = s.begin();

    while(i != s.end()) {
        i = find_if(i, s.end(), not_space);

        iter j = find_if(i, s.end(), space);

        if(i != s.end())
            vs.push_back(string(i, j));
        i = j;
        }
    return vs;
}

bool is_polindrome(const string& s)
{
    return equal(s.begin(), s.end(), s.rbegin());
}


