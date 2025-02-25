class Solution {
private:
    int codedValue = 0;
    unordered_map<string,string> TinyXReal;
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string encoded_str = "http://sup//" + to_string(codedValue);
        codedValue++;
        TinyXReal[encoded_str] = longUrl;

        return encoded_str;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return TinyXReal[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));