"use strict";

var assert = require('assert');
var chai = require('chai');
var marker = require('../marker');

describe('WritingUtensil', function() {
    describe('#draw()', function() {
      it('should draw', function() {
          let greenMarker = new marker.Marker("green");
          greenMarker.capped = false;
          let wu = [
            greenMarker,
            new marker.Pencil(),
            new marker.Pencil("brown")];
            wu.forEach((item)=>item.write());
      })
    })});


    describe('LazyPencil', function() {
      describe('#pencil()', function() {
        it('should be lazy', function() {
          let lzPencil = new LazyPencil(new PencilBuilder().color("BLACK"));
          let lzMarker = new LazyMarker(new MarkerBuilder().color("BLUE").capped(false));
          assert.equal(lzMarker.object,null,'object is not null?');
          lzMarker.item.write();
          let oldItem = lzMarker.item;
          assert.notEqual(lzMarker.object,null,'object is created.');
          lzMarker.item.write();
          assert.equal(lzMarker.item,oldItem,'object is same.');
        })
      })});
  