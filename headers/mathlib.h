class Vector {
    float x, y, z;
};

class VectorAligned : public Vector {
    float w;
};

class Quaternion {
    float x, y, z, w;
};

class QuaternionAligned : Quaternion {

};

class alignas(16) CTransform {
    VectorAligned m_vPosition;
    QuaternionAligned m_orientation;
};