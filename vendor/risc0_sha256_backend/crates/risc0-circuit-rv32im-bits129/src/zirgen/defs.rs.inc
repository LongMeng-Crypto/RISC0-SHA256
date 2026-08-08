set_field!(BabyBear6);
define_buffer_list!{
all: [accum,code,data,global,mix,test,],
rows: [accum,code,data,test,],
taps: [accum,code,data,],
globals: [global,mix,],}
define_tap_buffer!{accum, /*count=*/151, /*groupId=*/0}
define_tap_buffer!{code, /*count=*/1, /*groupId=*/1}
define_tap_buffer!{data, /*count=*/214, /*groupId=*/2}
define_global_buffer!{global, /*count=*/92}
define_global_buffer!{mix, /*count=*/54}
define_buffer!{test, /*count=*/214}
