import {Shape} from "./shape.js" 

export class Circle extends Shape {
    #radius
    
    constructor (x, y, radius) {
        super (x, y)
        this.#radius = radius
    }

    draw (ctx) {
        ctx.beginPath()
        ctx.arc(this._x, this._y, this.#radius, 0, 2 * Math.PI)
        ctx.lineWidth = this._lineWidth
        ctx.color = this._color
        ctx.stroke()
    }
}