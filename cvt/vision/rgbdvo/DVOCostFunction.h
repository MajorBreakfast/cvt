/*
   The MIT License (MIT)
   
   Copyright (c) 2011 - 2013, Philipp Heise and Sebastian Klose
   
   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to deal
   in the Software without restriction, including without limitation the rights
   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
   copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:
   
   The above copyright notice and this permission notice shall be included in
   all copies or substantial portions of the Software.
   
   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
   THE SOFTWARE.
*/


#ifndef CVT_DVOCOSTFUNCTION_H
#define CVT_DVOCOSTFUNCTION_H

#include <cvt/vision/rgbdvo/CostFunction.h>
#include <cvt/gfx/Image.h>

namespace cvt {

    template <class Derived>
    class DVOCostFunction : public CostFunction<Derived>
    {
        public:
            virtual ~DVOCostFunction(){}

            virtual void setInput( const Image& gray, const Image& depth ) = 0;
            virtual Matrix4f pose() const = 0;
            virtual void setPose( const Matrix4f& pose ) = 0;
            virtual const Matrix4f& referencePose() const = 0;
            virtual void updateOfflineData() = 0;
            virtual size_t modelSize( size_t octave = 0 ) const = 0;

    };

}

#endif // DVOCOSTFUNCTION_H
