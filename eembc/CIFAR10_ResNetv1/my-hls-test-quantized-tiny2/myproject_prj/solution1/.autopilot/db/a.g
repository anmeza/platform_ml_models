#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /data/armita/Andy/platform_ml_models/eembc/CIFAR10_ResNetv1/my-hls-test-quantized-tiny2/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
