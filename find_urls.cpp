#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using std::string;
using std::vector;
typedef string::const_iterator iter;

iter url_begin(iter b, iter e);
iter url_end(iter b, iter e);

//vector<string> find_urls(const string& s)
//{
//    vector<string> v;

//    iter b = s.begin();
//    iter e = s.end();

//    while(b != e) {
//        b = url_begin(b, e);
//        if(b != e){
//            iter after = url_end(b, e);
//            v.push_back(string(b, after));
//            b = after;
//        }
//    }
//    return v;
//}
bool not_url_char(char c)
{
    static const string url_ch = "~;/?:@=&$-_.+!*'(),";
    return !(isalnum(c) || find(url_ch.begin(), url_ch.end(), c) != url_ch.end());
}

iter url_end(iter b, iter e)
{
    return find_if(b, e, not_url_char);
}

//iter url_begin(iter b, iter e)
//{
//    static const string sep = "://";
//    iter is = b;
//    while((is = search(ie, e, sep.begin(), sep.end())) != e) {
//        if(i != b && i + sep.size() != e) {
//            iter beg = is;
//            while(beg != b && isalpha(beg[-1]))
//                --beg;
//            if(beg != is && !not_url_char(is[sep.size()]))
//                return beg;
//        }
//        i += sep.size();
//    }
//    return e;
//}


