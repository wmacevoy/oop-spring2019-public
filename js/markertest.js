var assert = require('assert');
var marker = require('marker');

describe('Marker', function() {
  describe('#constructor()', function() {
    it('should be black when started black', function(){
        let blackMarker = marker.Marker("black");
        assert.equal("black",blackMarker.color);
    });
    it('should be initially capped', function() {
        let blackMarker = marker.Marker("black");
        assert.equal(true,blackMarker.capped);        
    });
    it('should fail to draw when capped', function() {
        let blackMarker = marker.Marker("black");
        expect(blackMarker.draw().to.throw(Marker.BAD_MARKER_CAPPED_DRAW));
    });
  });
});