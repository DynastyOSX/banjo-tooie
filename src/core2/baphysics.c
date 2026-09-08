#include "overlays/ba/physics.h"

s32 func_8009AD70() 
{
    return 0xF;
}

u8 func_8009AD78(PlayerState *self, s32 index)
{
    return self->fieldC4[index];
}

void func_8009AD88(s32 arg0) 
{
}
void func_8009AD90(PlayerState *self)
{
    s32 i;

    for (i = 0; i < 15; i++) {
        self->fieldC4[i] = 0;
    }
}

void func_8009ADF0(PlayerState *self, s32 index, u8 value)
{
    self->fieldC4[index] = value;
}
s32 func_8009AE00() 
{
    return 0xC4;
}

void func_8009AE08(PlayerState *self)
{
    f32 sp_3c;
    f32 sp_4c[3];
    f32 sp_40[3];
    f32 sp_58[3];
    f32 sp_64[3];
    f32 sp_70[3];
    f32 sp_7c[3];

    func_800EEB9C(
        self->baphysics + 0x1C,
        self->baphysics->unk40,
        self->baphysics->unk3C * self->baphysics->unk50
    );

    sp_58[0] = self->baphysics->unk10;
    sp_58[1] = 0.0f;
    sp_58[2] = self->baphysics->unk18;

    func_800EE7F8(self->baphysics + 0x1C, sp_58);

    sp_3c = 0.0f;

    if (func_80096518(self) == 0)
        goto end;

    func_800963C0(self, sp_4c);
    func_800EF410(sp_40, sp_58);
    func_800EEAA4(sp_40, sp_4c);

    sp_3c = func_800A3378(self);

    if (sp_3c == 0.0f)
        goto end;

    if (sp_3c < 0.0f) {
        if (func_8008E1C4(self)) {
            sp_3c = func_800F10B4(
                sp_3c,
                0.0f,
                1.0f,
                sp_3c * 0.5f,
                -1.0f
            );
        } else {
            sp_3c *= 0.5f;
        }
    } else {
        func_800EF334(
            sp_58,
            1.0f + sp_3c * D_801252A0
        );
    }

end:
    func_800EF3DC(sp_7c, sp_70);
    func_800EF334(sp_7c, func_800D8FF8() * 30.0f);

    self->baphysics->unk14 +=
        self->baphysics->unk34 * func_800D8FF8();

    if (self->baphysics->unk14 < self->baphysics->unk38)
        self->baphysics->unk14 = self->baphysics->unk38;

    func_800EFA20(
        self->baphysics + 0x28,
        self->baphysics + 0x10,
        func_800D8FF8()
    );

    func_800EF04C(
        self->baphysics + 0x04,
        self->baphysics + 0x28
    );

    func_800F2168(self->baphysics + 0x10, 0.0001f);
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B08C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B170.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B1FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B27C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B450.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B4D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B4FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B7C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_type.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B94C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B98C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_target_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_target_yaw.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009B9F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_vertical_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BA9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BADC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BAE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BAF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_get_target_horizontal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_get_vertical_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BB94.s")

f32 func_8009BBB8(PlayerState *self)
{
    f32 current_velocity;
    f32 target_velocity;

    current_velocity = func_8009BB5C(self);
    target_velocity = baphysics_get_target_horizontal_velocity(self);

    if (current_velocity < target_velocity)
        return target_velocity / current_velocity;

    return 1.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BC08.s")

void func_8009BC34(PlayerState* arg0)
{
    baphysics_reset_gravity(arg0);
    baphysics_reset_terminal_velocity(arg0);
}
#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BC5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_reset_gravity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_reset_terminal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_gravity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/baphysics_set_terminal_velocity.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BCD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/core2/baphysics/func_8009BD18.s")
