"use strict";

class BadMarkerState {
    constructor(problem) {
        this.problem=problem;
    }
}

class Marker {
    constructor(color) {
        console.log("constructed marker");
        this._color = color;
        this._capped = true;
    }

    draw() {
        if (!this._capped) {
           console.log("drawing in " + this._color);
        } else {
            throw Marker.BAD_MARKER_CAPPED_DRAW;
        }
    }

    get color() {
        return this._color;
    }

    get capped() {
        return this._capped;
    }

    set capped(value) {
        if (typeof value == "boolean") {
            this._capped = value;
        } else {
            throw Marker.BAD_MARKER_CAPPED_INVALID;
        }
    }
}

Marker.BAD_MARKER_CAPPED_DRAW = new BadMarkerState("drawing with capped marker is bad");
Marker.BAD_MARKER_CAPPED_INVALID = new BadMarkerState("capped must be true or false");


exports.Marker = Marker;
exports.BadMarkerState = BadMarkerState;
