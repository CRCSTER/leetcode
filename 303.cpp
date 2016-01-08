class NumArray {
public:
    vector<int> crc;
    NumArray(vector<int> &nums) {
        crc.push_back(0);
        for(auto i : nums)
        {
            crc.push_back(crc.back() + i);
        }
    }

    int sumRange(int i, int j) {
        return crc[j + 1] - crc[i];
    }
};
