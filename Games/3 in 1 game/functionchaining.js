var obj = function() {
    this.counter = 0;
    this.add = function(item) {
        this.counter += item;
        return this;
    }
    this.subtract = function(item) {
        this.counter =- item;
        return this;
    }
    this.print = function() {
        console.log(this.counter)
    }
}

var x = new obj()
//x.add(12);
//x.subtract(2);
//x.print();

//console.log(x.add(12));
x.add(12).subtract(2).add(12).print();


