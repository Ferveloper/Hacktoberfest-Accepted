//function Person(first,last,age,eyeColor){
    // this.first = first;
    // this.last = last;
    // this.age = age;
    // this.eyecolor = eyeColor
// }

class Person {
    constructor(first,last,age,eyeColor){
        this.first = first;
        this.last = last;
        this.age = age;
        this.eyeColor = eyeColor
    }
    fullName() {
        return `${this.first}  ${this.last}`;
    }
}

class Kid extends Person {
    constructor(school){
        this.school = school;
    }
}

const kid = new Kid('PPS');
console.log(kid);
//Person.prototype.occupation ='Doctor';

const father = new Person('John', 'fill', 34, 'blue' );
console.log(father);


