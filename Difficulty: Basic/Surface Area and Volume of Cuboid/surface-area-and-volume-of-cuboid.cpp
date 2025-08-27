
class Solution {
  public:
    vector<int> find(int l, int b, int h) {
        // Code here
        int area=2*(l*b + b*h + h*l);
        int volume=(l*b*h);
        vector<int>res;
        res.push_back(area);
        res.push_back(volume);
        return res;
    }
};