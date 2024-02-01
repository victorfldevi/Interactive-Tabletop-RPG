using System.Collections;
using UnityEngine;

public class Die_d4 : Die
{
    public int permaValue;

    override protected Vector3 HitVector(int side)
    {
        switch (side)
        {
            case 1: return new Vector3(0F, 0.7F, 0F);
            case 2: return new Vector3(0.5F, -0.2F, 0.3F);
            case 3: return new Vector3(0, -0.2F, -0.7F);
            case 4: return new Vector3(-0.5F, -0.2F, 0.3F);
        }
        return Vector3.zero;
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Dice"))
        {
            Physics.IgnoreCollision(GetComponent<Collider>(), collision.gameObject.GetComponent<Collider>());
        }
    }
}
