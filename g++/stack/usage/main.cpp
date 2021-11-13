int func2() {
    return 0;
}

int func1() {
    int a[4];

    return func2();
}

int main() {
    func1();

    return 0;
}
