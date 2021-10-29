class Solution {
    public int removeDuplicates(int[] nums) {
        int i,j=0;
        i=0;
        if(nums.length==0)
        {
            return 0;
        }
        for(j=1;j<nums.length;j++)
        {
            if(nums[j]!=nums[i])
            {
               i++;
                nums[i]= nums[j];
            }
            
        }
        return i+1;
    }
}
