function customSort(array) {
    let factor = 10;

    function comparator(x, y) {
        return (x % factor) - (y % factor);
    }

    return array.sort(comparator);
}

let numbers = [64, 34, 25, 12, 22, 11, 90];

console.log(customSort(numbers));

