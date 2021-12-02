/*
@auther liuyang
@since 2021/12/2
ref：https://www.bilibili.com/read/cv8623235?from=articleDetail
OJ：accept
*/
import java.util.LinkedList;
import java.util.Queue;

class LC933 {

    Queue<Integer> queue;

    public LC933() {
        this.queue = new LinkedList<Integer>();
    }

    public int ping(int i) {
        queue.add(i);
        while (!queue.isEmpty() && (i - queue.element() > 3000)) {
            queue.remove();
        }
        return queue.size();
    }

}