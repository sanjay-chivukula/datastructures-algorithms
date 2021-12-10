import java.util.Iterator;

public interface Stack<T> extends Iterator<T> {

  int size();

  boolean isEmpty();

  T peek();

  void push(T data);

  T pop();
}
