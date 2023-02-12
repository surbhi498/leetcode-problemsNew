class Codec {
public:
    vector<int> pb;

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string res="";
        for(auto& gh : strs) {
            res+=gh;
            int n = gh.size();
            pb.push_back(n);
        }
        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
           int fg = s.size();
           int pos=0;
           vector<string> kl;
           for(int i=0;i<pb.size();i++) {
                 string bn = s.substr(pos,pb[i]);
                 pos = pos + pb[i];
                 kl.push_back(bn);
           }
        return kl;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));