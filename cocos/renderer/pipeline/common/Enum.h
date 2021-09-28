#pragma once

enum class CommonInsertPoint {
    DIP_POSTPROCESS = 400,
};

enum class DeferredInsertPoint {
    DIP_GBUFFER = 100,
    DIP_LIGHTING = 200,
    DIP_TRANSPARENT = 220,
    DIP_SSPR = 300,
    DIP_INVALID
};

enum class ForwardInsertPoint {
    IP_FORWARD = 100,
    IP_INVALID
};