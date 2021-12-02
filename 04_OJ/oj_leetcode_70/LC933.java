/*
@auther liuyang
@since 2021/12/2
参考：https://www.bilibili.com/read/cv8623235?from=articleDetail
OJ状态：TODO
*/
import java.util.LinkedList;
import java.util.Queue;

class LC933 {

    Queue<Integer> queue;

    public LC933() {
        queue = new LinkedList<Integer>();
    }

    /*
    两组：
    add/remove/element
    offer/poll/peek
    联想C++ STL:
    push/pop/ front back
    */
    public int ping(int i) {
        queue.add(i);
        while (!queue.isEmpty() && (t - queue.element() > 3000) {
            queue.remove();
        }
        return queue.size();
    }

}