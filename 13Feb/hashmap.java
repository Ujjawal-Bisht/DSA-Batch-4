import java.util.HashMap;

public class hashmap {
    public static void main(String[] args) {
        System.out.println("Hello world!");
        HashMap<Integer, Integer> map = new HashMap<>();

        // in c++ it is -> unordered_map<int, int> mp = {} ;
        map.put(1001, 12);
        System.out.println(map.get(1001));
        // map.remove(122);


        // in ase of collisiion hash map will take linked list and store second element in next node of linked list and so on. but in case of hash map in java it will take balanced tree and store second element in next node of balanced tree and so on.

        


    }
}
